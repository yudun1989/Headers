//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APNetErrorView, NSMutableArray;

@interface APWealthRpcCaller : NSObject
{
    id _delegate;
    APNetErrorView *_netErrorView;
    NSMutableArray *_asyncCallers;
}

@property(retain, nonatomic) NSMutableArray *asyncCallers; // @synthesize asyncCallers=_asyncCallers;
@property(retain, nonatomic) APNetErrorView *netErrorView; // @synthesize netErrorView=_netErrorView;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)callAsyncBlock:(id)arg1 callBlock:(CDUnknownBlockType)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)addAsyncCallers:(id)arg1 caller:(id)arg2;
- (void)clearAsyncCallers;
- (id)init;

@end

