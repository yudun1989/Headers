//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KSBrowseGestureGuideView, NSString;

@interface KSBrowseGestureGuide : NSObject
{
    KSBrowseGestureGuideView *_guideView;
    _Bool _disableAutoPlay;
    long long _type;
    NSString *_message;
}

+ (id)guideWithConfig:(id)arg1;
@property(retain, nonatomic) NSString *message; // @synthesize message=_message;
@property(nonatomic) _Bool disableAutoPlay; // @synthesize disableAutoPlay=_disableAutoPlay;
@property(nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)dismiss;
- (void)showGuideInView:(id)arg1 compeletion:(CDUnknownBlockType)arg2;
- (_Bool)isShowing;

@end

