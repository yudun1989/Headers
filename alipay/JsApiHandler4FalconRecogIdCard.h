//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PSDJsApiHandler.h"

@class FalconCardManager;

@interface JsApiHandler4FalconRecogIdCard : PSDJsApiHandler
{
    CDUnknownBlockType _callback;
    FalconCardManager *_falmg;
}

@property(retain, nonatomic) FalconCardManager *falmg; // @synthesize falmg=_falmg;
@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)handler:(id)arg1 context:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)currentViewController:(id)arg1;
- (void)FalconCMJsonResult:(id)arg1;

@end

