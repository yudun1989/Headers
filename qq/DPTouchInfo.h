//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface DPTouchInfo : NSObject
{
    _Bool _hasScrollSuperview;
    NSString *_name;
    NSString *_accessLabel;
    NSString *_superViewName;
    struct CGPoint _scrollAbsoluteOrigin;
    struct CGRect _relativeFrame;
}

@property(nonatomic) struct CGPoint scrollAbsoluteOrigin; // @synthesize scrollAbsoluteOrigin=_scrollAbsoluteOrigin;
@property(retain, nonatomic) NSString *superViewName; // @synthesize superViewName=_superViewName;
@property(nonatomic) _Bool hasScrollSuperview; // @synthesize hasScrollSuperview=_hasScrollSuperview;
@property(nonatomic) struct CGRect relativeFrame; // @synthesize relativeFrame=_relativeFrame;
@property(retain, nonatomic) NSString *accessLabel; // @synthesize accessLabel=_accessLabel;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (id)initWithClassName:(id)arg1 accessibilityLabel:(id)arg2 frame:(struct CGRect)arg3;
- (void)dealloc;

@end

