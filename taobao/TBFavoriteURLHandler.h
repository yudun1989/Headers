//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "TBURLActionHandler-Protocol.h"

@class NSString, UIViewController;

@interface TBFavoriteURLHandler : NSObject <TBURLActionHandler>
{
    UIViewController *_myTaobaoVC;
}

@property(retain, nonatomic) UIViewController *myTaobaoVC; // @synthesize myTaobaoVC=_myTaobaoVC;
- (void).cxx_destruct;
- (id)dictionaryWithUrlString:(id)arg1;
- (id)redirectToWeex:(id)arg1 orangeKey:(id)arg2 defaultUrl:(id)arg3 defaultQuery:(id)arg4;
- (_Bool)isFavListUrl:(id)arg1;
- (id)handleURLActionRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

