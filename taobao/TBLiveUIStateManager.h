//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;

@interface TBLiveUIStateManager : NSObject
{
    _Bool _switchLiveRoomEnable;
    NSMutableDictionary *_hiddenState;
}

@property(nonatomic) _Bool switchLiveRoomEnable; // @synthesize switchLiveRoomEnable=_switchLiveRoomEnable;
@property(retain, nonatomic) NSMutableDictionary *hiddenState; // @synthesize hiddenState=_hiddenState;
- (void).cxx_destruct;
- (_Bool)enableSwitchLiveRoom;
- (_Bool)hiddenStateWithUI:(id)arg1;
- (void)setUI:(id)arg1 hiddenState:(_Bool)arg2;
- (void)clearState;
- (void)dealloc;
- (id)init;

@end

