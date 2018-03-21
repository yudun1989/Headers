//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSLayoutManager, NSTextContainer, NSTextStorage;

@interface _VZATextKitComponents : NSObject
{
    NSTextStorage *_textStorage;
    NSTextContainer *_textContainer;
    NSLayoutManager *_layoutManager;
}

+ (id)componentsWithAttributedString:(id)arg1 truncationMode:(long long)arg2 maximumLineCount:(unsigned long long)arg3 containerSize:(struct CGSize)arg4;
+ (id)componentsWithAttributedString:(id)arg1 textContainerSize:(struct CGSize)arg2;
@property(retain, nonatomic) NSLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property(retain, nonatomic) NSTextContainer *textContainer; // @synthesize textContainer=_textContainer;
@property(retain, nonatomic) NSTextStorage *textStorage; // @synthesize textStorage=_textStorage;
- (void).cxx_destruct;

@end

