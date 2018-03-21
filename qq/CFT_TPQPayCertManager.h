//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QQMainProject/CFT_TPBaseEngine.h>

@class CFT_TenpayCertificate, NSMutableDictionary;
@protocol TPQpayCertManagerDelegate;

@interface CFT_TPQPayCertManager : CFT_TPBaseEngine
{
    id <TPQpayCertManagerDelegate> _delegate;
    CFT_TenpayCertificate *_tpCert;
    NSMutableDictionary *_cnDict;
}

@property(retain, nonatomic) NSMutableDictionary *cnDict; // @synthesize cnDict=_cnDict;
@property(retain, nonatomic) CFT_TenpayCertificate *tpCert; // @synthesize tpCert=_tpCert;
@property(nonatomic) id <TPQpayCertManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finish:(id)arg1 resultCode:(int)arg2 quiet:(_Bool)arg3;
- (_Bool)checkIllegal:(id)arg1 quiet:(_Bool)arg2;
- (id)getCSR;
- (void)qpay_cert_activate;
- (void)qpay_cert_confirm_quiet;
- (void)qpay_cert_confirm;
- (void)activateCert:(id)arg1 quiet:(_Bool)arg2;
- (void)installCert:(id)arg1 quiet:(_Bool)arg2;
- (id)activeCertID;
- (id)certSign:(id)arg1;
- (void)deleteCert:(id)arg1;
- (_Bool)isCertActive:(id)arg1;
- (void)dealloc;
- (id)init;

@end

