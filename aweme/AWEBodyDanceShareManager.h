//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AWEBodyDanceShareViewController;

@interface AWEBodyDanceShareManager : NSObject
{
    AWEBodyDanceShareViewController *_shareViewController;
}

+ (id)sharedInstance;
@property(retain, nonatomic) AWEBodyDanceShareViewController *shareViewController; // @synthesize shareViewController=_shareViewController;
- (void).cxx_destruct;
- (void)shareBodyDance:(id)arg1 controller:(id)arg2;
- (void)shareBodyDance:(id)arg1 window:(id)arg2;

@end

