//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface CFActionDispatcher : NSObject
{
    NSDictionary *_appNameDic;
    NSDictionary *_actionNameDic;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *actionNameDic; // @synthesize actionNameDic=_actionNameDic;
@property(retain, nonatomic) NSDictionary *appNameDic; // @synthesize appNameDic=_appNameDic;
- (void).cxx_destruct;
- (id)findDesURLStringByBundleName:(id)arg1;
- (_Bool)openActionPage:(id)arg1 target:(id)arg2;
- (void)requestTaomiji:(id)arg1 callBackBlock:(CDUnknownBlockType)arg2;
- (id)requestDressSingel;
- (id)requestDressCollection;
- (void)completePreview:(id)arg1 tipsCardList:(id)arg2;
- (void)dispatchActionWithTarget:(id)arg1 dmResultModel:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

