//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GIGBDTaskItem.h"

@interface GIGBDPhoneInfo : GIGBDTaskItem
{
    int netWorkStatus_;
    int newLtTypeNum_;
    int zjLtTypeNum_;
    int ltTypeNum_;
    _Bool isPnReady_;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool isPnReady; // @synthesize isPnReady=isPnReady_;
- (id)md5String:(id)arg1;
- (void)directToAnotherPnMethodForNewLT;
- (id)getIp;
- (_Bool)isFetchNumberTimeEnd;
- (_Bool)isFetchPhoneNum;
- (void)savePhoneNumber:(id)arg1;
- (id)getPostParms:(id)arg1 forDictionary:(id)arg2;
- (void)getDataForPostRequest:(id)arg1 callBack:(CDUnknownBlockType)arg2;
- (void)getdoxPb;
- (void)getnewlotPb;
- (void)getzjlotpb;
- (void)getALLlotPb;
- (void)getyodPb;
- (id)genPhoneNumber;
- (id)retrivePhoneNumber;
- (id)init;

@end
