//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, TBLMPopParam, UIView;
@protocol TBLMPopRequestDelegate;

@interface TBLMPopRequest : NSObject
{
    UIView *_layer;
    long long _status;
    long long _domain;
    NSString *_layerType;
    UIView *_hostView;
    TBLMPopParam *_popParam;
    id <TBLMPopRequestDelegate> _delegate;
}

+ (id)pickHighestPriorityRequestInArray:(id)arg1 toForceCloseRequest:(id)arg2;
+ (id)pickHighestPriorityRequestInArray:(id)arg1;
@property(nonatomic) __weak id <TBLMPopRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) TBLMPopParam *popParam; // @synthesize popParam=_popParam;
@property(retain, nonatomic) UIView *hostView; // @synthesize hostView=_hostView;
@property(copy, nonatomic) NSString *layerType; // @synthesize layerType=_layerType;
@property(nonatomic) long long domain; // @synthesize domain=_domain;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (id)layer;
- (void)setLayer:(id)arg1;
- (id)initPopRequestWithDomain:(long long)arg1 layerType:(id)arg2 hostView:(id)arg3 popParam:(id)arg4;

@end
