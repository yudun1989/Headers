//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TTRouteDesignatedNavProtocol-Protocol.h"
#import "TTRouteLogicDatasource-Protocol.h"
#import "TTRouteLogicDelegate-Protocol.h"

@class NSString;

@interface TTRouteService : NSObject <TTRouteLogicDatasource, TTRouteLogicDelegate, TTRouteDesignatedNavProtocol>
{
}

+ (void)registerTTRouteService;
+ (id)sharedTTRouteService;
- (id)_suitableNavigationController;
- (void)_goToLoginVCWithParams:(id)arg1;
- (void)_goToMobileLoginVC;
- (void)_goToAccountBindVC;
- (void)_goToMobileLoginWithType:(long long)arg1;
- (_Bool)_isLoginRelatedLogic:(id)arg1;
- (id)designatedRouteNavigationController;
- (void)ttRouteLogic_configNavigationController:(id)arg1;
- (void)ttRouteLogic_sendOpenTrackWithFromKey:(id)arg1;
- (id)ttRouteLogic_classForKey:(id)arg1;
- (_Bool)ttRouteLogic_isLoginRelatedLogic:(id)arg1;
- (id)ttRouteLogic_registeredNavigationControllerClass;
- (_Bool)ttRouteLogic_detailViewABEnabled;
- (_Bool)ttRouteLogic_isLogin;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

