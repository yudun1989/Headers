//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/QQModel.h>

@class NSArray, NSString;

@interface OCRSearchResultModel : QQModel
{
    int _bussinesType;
    int _tencent_errorcode;
    int _sougou_errorcode;
    NSArray *_cardResults;
    long long _reqRecogType;
    long long _ocrRecogType;
    NSString *_sessionId;
    NSString *_tencent_errormsg;
    NSString *_sougou_errormsg;
}

@property(retain, nonatomic) NSString *sougou_errormsg; // @synthesize sougou_errormsg=_sougou_errormsg;
@property(nonatomic) int sougou_errorcode; // @synthesize sougou_errorcode=_sougou_errorcode;
@property(retain, nonatomic) NSString *tencent_errormsg; // @synthesize tencent_errormsg=_tencent_errormsg;
@property(nonatomic) int tencent_errorcode; // @synthesize tencent_errorcode=_tencent_errorcode;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(nonatomic) int bussinesType; // @synthesize bussinesType=_bussinesType;
@property(nonatomic) long long ocrRecogType; // @synthesize ocrRecogType=_ocrRecogType;
@property(nonatomic) long long reqRecogType; // @synthesize reqRecogType=_reqRecogType;
@property(retain, nonatomic) NSArray *cardResults; // @synthesize cardResults=_cardResults;
- (void).cxx_destruct;

@end

