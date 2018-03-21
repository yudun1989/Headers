//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AWELivePresentListResponseModel, AWELiveSendPresentResponseModel;

@interface AWELiveGiftListDataController : NSObject
{
    AWELivePresentListResponseModel *_giftListModel;
    AWELiveSendPresentResponseModel *_sendPresentResponseModel;
}

@property(retain, nonatomic) AWELiveSendPresentResponseModel *sendPresentResponseModel; // @synthesize sendPresentResponseModel=_sendPresentResponseModel;
@property(retain, nonatomic) AWELivePresentListResponseModel *giftListModel; // @synthesize giftListModel=_giftListModel;
- (void).cxx_destruct;
- (void)sendPresent:(id)arg1 presentID:(id)arg2 count:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_getUserCoinsWithPresentList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getSandBoxGiftListModel:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)getGiftListModelWithCompletion:(CDUnknownBlockType)arg1;
- (void)getGiftListModelWithRoom:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

