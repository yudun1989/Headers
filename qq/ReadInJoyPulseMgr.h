//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSTimer, ReadInJoyAIOPulse, ReadInJoyFirstScnRedPntPulse, ReadInJoyLeftBtmRedPntPulse;

@interface ReadInJoyPulseMgr : NSObject
{
    NSArray *_pulseArray;
    ReadInJoyLeftBtmRedPntPulse *_leftBtmRedPntPulse;
    ReadInJoyFirstScnRedPntPulse *_firstScnRedPntPulse;
    ReadInJoyAIOPulse *_AIOPulse;
    NSTimer *_timer;
}

+ (id)getInstance;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(retain, nonatomic) ReadInJoyAIOPulse *AIOPulse; // @synthesize AIOPulse=_AIOPulse;
@property(retain, nonatomic) ReadInJoyFirstScnRedPntPulse *firstScnRedPntPulse; // @synthesize firstScnRedPntPulse=_firstScnRedPntPulse;
@property(retain, nonatomic) ReadInJoyLeftBtmRedPntPulse *leftBtmRedPntPulse; // @synthesize leftBtmRedPntPulse=_leftBtmRedPntPulse;
@property(retain, nonatomic) NSArray *pulseArray; // @synthesize pulseArray=_pulseArray;
- (void).cxx_destruct;
- (void)scheduledPulseTimerWithInterval:(unsigned long long)arg1;

@end

