//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURL, UIViewController;

@interface NBComponentContext : NSObject
{
    UIViewController *_currentViewController;
    NSURL *_url;
}

@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) __weak UIViewController *currentViewController; // @synthesize currentViewController=_currentViewController;
- (void).cxx_destruct;

@end

