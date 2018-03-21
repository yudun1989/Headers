//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/GATextViewInternal.h>

@protocol GAEmojiTextViewDelegate;

@interface GAEmojiTextView : GATextViewInternal
{
    struct CGSize _oldContentSize;
    _Bool _isContentOffsetAdjust;
    _Bool _isNotAllowRestContentOffset;
    CDUnknownBlockType _onPaste;
    id <GAEmojiTextViewDelegate> _responderDelegate;
    struct CGRect _cursorRect;
}

@property(nonatomic) _Bool isNotAllowRestContentOffset; // @synthesize isNotAllowRestContentOffset=_isNotAllowRestContentOffset;
@property(nonatomic) struct CGRect cursorRect; // @synthesize cursorRect=_cursorRect;
@property(nonatomic) __weak id <GAEmojiTextViewDelegate> responderDelegate; // @synthesize responderDelegate=_responderDelegate;
@property(copy, nonatomic) CDUnknownBlockType onPaste; // @synthesize onPaste=_onPaste;
@property(nonatomic) _Bool isContentOffsetAdjust; // @synthesize isContentOffsetAdjust=_isContentOffsetAdjust;
- (void).cxx_destruct;
- (struct CGRect)caretRectForPosition:(id)arg1;
- (double)getFontLineHeight;
- (struct CGPoint)getSuitableContentOffset:(struct CGPoint)arg1;
- (void)setContentSize:(struct CGSize)arg1;
- (void)resetContentOffset;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)copy:(id)arg1;
- (void)replaceComposedString:(id)arg1 atRange:(struct _NSRange)arg2;
- (void)insertEmojiImage:(id)arg1 withString:(id)arg2 atRange:(struct _NSRange)arg3;
- (void)deleteEmoji;
- (id)encodedStringInRange:(struct _NSRange)arg1;
- (id)encodedString;
- (id)initWithFrame:(struct CGRect)arg1;

@end

