//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VPObject.h"

#import "VPJSObjectJavaScriptMethods-Protocol.h"

@class NSDictionary, UIView, VPView;

@interface VPJSObject : VPObject <VPJSObjectJavaScriptMethods>
{
    VPView *_vpView;
    UIView *_baseView;
    NSDictionary *_modelData;
    NSDictionary *_oldData;
}

@property(retain, nonatomic) NSDictionary *oldData; // @synthesize oldData=_oldData;
@property(retain, nonatomic) NSDictionary *modelData; // @synthesize modelData=_modelData;
@property(nonatomic) __weak UIView *baseView; // @synthesize baseView=_baseView;
@property(nonatomic) __weak VPView *vpView; // @synthesize vpView=_vpView;
- (void).cxx_destruct;
- (id)oldModelData:(id)arg1;

@end

