//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

@interface AUWindowManager : NSObject
{
    NSMutableArray *_normalWindows;
    NSMutableArray *_popUpWindows;
}

+ (id)sharedManager;
@property(retain, nonatomic) NSMutableArray *popUpWindows; // @synthesize popUpWindows=_popUpWindows;
@property(retain, nonatomic) NSMutableArray *normalWindows; // @synthesize normalWindows=_normalWindows;
- (void).cxx_destruct;
- (void)enqueueWindow:(id)arg1;
- (id)dequeueWindowWithType:(long long)arg1;
- (id)initWindowManager;
- (id)init;

@end

