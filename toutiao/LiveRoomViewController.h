//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "HTSLiveMessageServiceDelegate-Protocol.h"

@class HTSLiveMessageService, HTSLiveRoomListener, LiveRoomModel, LiveRoomViewContainer, NSString;

@interface LiveRoomViewController : UIViewController <HTSLiveMessageServiceDelegate>
{
    _Bool _startFetchMessage;
    id _observer;
    HTSLiveMessageService *_service;
    id _closeRoomObserver;
    LiveRoomModel *_liveRoomModel;
    LiveRoomViewContainer *_liveRoomViewContainer;
    HTSLiveRoomListener *_listener;
}

@property(retain, nonatomic) HTSLiveRoomListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) LiveRoomViewContainer *liveRoomViewContainer; // @synthesize liveRoomViewContainer=_liveRoomViewContainer;
@property(retain, nonatomic) LiveRoomModel *liveRoomModel; // @synthesize liveRoomModel=_liveRoomModel;
@property(retain, nonatomic) id closeRoomObserver; // @synthesize closeRoomObserver=_closeRoomObserver;
@property(retain, nonatomic) HTSLiveMessageService *service; // @synthesize service=_service;
- (void).cxx_destruct;
- (void)closeWebSocket;
- (void)didReceiveMessage:(id)arg1;
- (void)didReceiveWebSocketMessageModel:(id)arg1;
- (void)restartServiceWithLiveRoomModel:(id)arg1;
- (void)startFetchMessage;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

