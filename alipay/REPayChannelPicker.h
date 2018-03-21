//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class GIFTPRODRecommendChannel, NSString, REDataEngine, UIActivityIndicatorView, UIButton, UIColor;
@protocol REPayChannelDelegate, SAAccountService, SPSafePayService;

@interface REPayChannelPicker : UIView
{
    _Bool _isPayUniform;
    _Bool _needBindNewCard;
    int _channelType;
    id <REPayChannelDelegate> _delegate;
    UIButton *_payChannelButton;
    UIColor *_payChannelColor;
    UIColor *_payChannelChangeColor;
    long long _alignment;
    unsigned long long _prodType;
    GIFTPRODRecommendChannel *_currentPayChannel;
    NSString *_money;
    NSString *_payChannelString;
    double _currentAvailableLimit;
    id <SAAccountService> _accountService;
    id <SPSafePayService> _service;
    UIActivityIndicatorView *_requestIndicator;
    REDataEngine *_dataEngine;
    NSString *_bizIdentity;
    NSString *_bizType;
    NSString *_forbidParamString;
    NSString *_extInfos;
    NSString *_currentOrderNo;
    unsigned long long _currentSPSafePayAction;
    UIView *_operationView;
}

@property(nonatomic) __weak UIView *operationView; // @synthesize operationView=_operationView;
@property(nonatomic) unsigned long long currentSPSafePayAction; // @synthesize currentSPSafePayAction=_currentSPSafePayAction;
@property(copy, nonatomic) NSString *currentOrderNo; // @synthesize currentOrderNo=_currentOrderNo;
@property(nonatomic) int channelType; // @synthesize channelType=_channelType;
@property(copy, nonatomic) NSString *extInfos; // @synthesize extInfos=_extInfos;
@property(copy, nonatomic) NSString *forbidParamString; // @synthesize forbidParamString=_forbidParamString;
@property(nonatomic) _Bool needBindNewCard; // @synthesize needBindNewCard=_needBindNewCard;
@property(copy, nonatomic) NSString *bizType; // @synthesize bizType=_bizType;
@property(copy, nonatomic) NSString *bizIdentity; // @synthesize bizIdentity=_bizIdentity;
@property(retain, nonatomic) REDataEngine *dataEngine; // @synthesize dataEngine=_dataEngine;
@property(retain, nonatomic) UIActivityIndicatorView *requestIndicator; // @synthesize requestIndicator=_requestIndicator;
@property(retain, nonatomic) id <SPSafePayService> service; // @synthesize service=_service;
@property(retain, nonatomic) id <SAAccountService> accountService; // @synthesize accountService=_accountService;
@property(nonatomic) _Bool isPayUniform; // @synthesize isPayUniform=_isPayUniform;
@property(nonatomic) double currentAvailableLimit; // @synthesize currentAvailableLimit=_currentAvailableLimit;
@property(copy, nonatomic) NSString *payChannelString; // @synthesize payChannelString=_payChannelString;
@property(retain, nonatomic) NSString *money; // @synthesize money=_money;
@property(retain, nonatomic) GIFTPRODRecommendChannel *currentPayChannel; // @synthesize currentPayChannel=_currentPayChannel;
@property(nonatomic) unsigned long long prodType; // @synthesize prodType=_prodType;
@property(nonatomic) long long alignment; // @synthesize alignment=_alignment;
@property(retain, nonatomic) UIColor *payChannelChangeColor; // @synthesize payChannelChangeColor=_payChannelChangeColor;
@property(retain, nonatomic) UIColor *payChannelColor; // @synthesize payChannelColor=_payChannelColor;
@property(retain, nonatomic) UIButton *payChannelButton; // @synthesize payChannelButton=_payChannelButton;
@property(nonatomic) __weak id <REPayChannelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)touchDownRestore;
- (void)touchDown;
- (void)redirectToBillApp;
- (void)alertUnknownPay;
- (void)invalidateOrderNo:(id)arg1 result:(struct MQPResult *)arg2;
- (void)safepayDidFinishWithResult:(struct MQPResult *)arg1;
- (void)requestDefaultPayChannel;
- (_Bool)canOperate;
- (void)createOrderAndPayWithBizReqdata:(id)arg1;
- (void)forwardToDelegate:(struct MQPResult *)arg1;
- (void)payForOrder:(id)arg1 withAmount:(double)arg2;
- (void)switchPayChannelAction;
- (void)clearChangeLabel;
- (void)clearArrowLayer;
- (void)layoutSubviews;
- (void)layoutIndicator;
- (void)cachePayChannel;
- (void)willMoveToSuperview:(id)arg1;
- (void)processInitialize;
- (id)initWithFrame:(struct CGRect)arg1 color:(id)arg2 changeColor:(id)arg3 operationView:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 color:(id)arg2 changeColor:(id)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end

