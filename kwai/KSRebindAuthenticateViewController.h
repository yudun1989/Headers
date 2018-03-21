//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KSWebViewController.h"

#import "GIDSignInUIDelegate-Protocol.h"
#import "KSCountryCodeSelectViewControllerDelegate-Protocol.h"

@class NSString;

@interface KSRebindAuthenticateViewController : KSWebViewController <KSCountryCodeSelectViewControllerDelegate, GIDSignInUIDelegate>
{
    NSString *_countryCodeCallBack;
}

@property(retain, nonatomic) NSString *countryCodeCallBack; // @synthesize countryCodeCallBack=_countryCodeCallBack;
- (void).cxx_destruct;
- (void)countryCodeSelectViewController:(id)arg1 didSelectCountryInfo:(id)arg2;
- (void)signIn:(id)arg1 presentViewController:(id)arg2;
- (void)askAccessTokenOfThirdPart:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFail:(CDUnknownBlockType)arg3;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

