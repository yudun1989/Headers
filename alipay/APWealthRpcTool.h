//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class APNetErrorView, APWealthRpcContext, APWealthRpcGloble;

@interface APWealthRpcTool : NSObject
{
    id delegate;
    APNetErrorView *netErrorView;
    APWealthRpcContext *_context;
    APWealthRpcGloble *_globle;
}

@property(retain, nonatomic) APWealthRpcGloble *globle; // @synthesize globle=_globle;
@property(retain, nonatomic) APWealthRpcContext *context; // @synthesize context=_context;
@property(retain, nonatomic) APNetErrorView *netErrorView; // @synthesize netErrorView;
@property(nonatomic) __weak id delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)clearAsyncCallers;
- (id)init;

@end

