//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MASSTimerBase.h"

@class MASSStreamUnit;

@interface ConnectTimer : MASSTimerBase
{
    MASSStreamUnit *_stream;
}

@property(retain, nonatomic) MASSStreamUnit *stream; // @synthesize stream=_stream;
- (void).cxx_destruct;
- (void)TimerOutHandle;
- (id)init;

@end

