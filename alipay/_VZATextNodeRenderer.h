//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSAttributedString, NSLayoutManager, NSTextContainer, NSTextStorage;

@interface _VZATextNodeRenderer : NSObject
{
    struct CGSize _constrainedSize;
    struct CGSize _calculatedSize;
    NSAttributedString *_attributedString;
    NSAttributedString *_truncationString;
    long long _truncationMode;
    unsigned long long _maximumLineCount;
    struct _NSRange _truncationCharacterRange;
    struct _NSRange _visibleRange;
    NSLayoutManager *_layoutManager;
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    struct RecursiveMutex _TextNodeRendererLock;
}

+ (id)_truncationCharacterSet;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)isIncludingEmoji:(id)arg1;
- (_Bool)isEmoji:(id)arg1;
- (void)dealloc;
- (long long)_filterLineBreakMode:(long long)arg1;
- (struct CGSize)size;
- (struct _NSRange)truncationStringCharacterRange;
- (struct _NSRange)visibleRange;
- (unsigned long long)lineCount;
- (void)drawInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2 isCancelled:(CDUnknownBlockType)arg3;
- (unsigned long long)_calculateCharacterIndexBeforeTruncationMessage;
- (void)_calculateSize;
- (void)_invalidateLayout;
- (void)_initializeTextKitComponentsWithAttributedString:(id)arg1;
- (void)_initializeTextKitComponentsWithCalculateSizeIfNeeded;
- (void)_initializeTextKitComponentsWithInvalidateLayoutIfNeeded;
- (id)initWithAttributedString:(id)arg1 truncationString:(id)arg2 truncationMode:(long long)arg3 maximumLineCount:(unsigned long long)arg4 constrainedSize:(struct CGSize)arg5;

@end

