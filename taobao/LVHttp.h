//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "LVClassProtocal-Protocol.h"
#import "LVProtocal-Protocol.h"
#import "NSURLConnectionDataDelegate-Protocol.h"

@class LVHttpResponse, LuaViewCore, NSString, NSURLConnection;

@interface LVHttp : NSObject <NSURLConnectionDataDelegate, LVProtocal, LVClassProtocal>
{
    LuaViewCore *_lv_luaviewCore;
    struct _LVUserDataInfo *_lv_userData;
    id _mySelf;
    LVHttpResponse *_response;
    id _function;
    double _timeout;
    NSURLConnection *_connection;
}

+ (int)lvClassDefine:(struct lua_State *)arg1 globalName:(id)arg2;
+ (_Bool)isTrustedHost:(id)arg1;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(retain, nonatomic) id function; // @synthesize function=_function;
@property(retain, nonatomic) LVHttpResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) id mySelf; // @synthesize mySelf=_mySelf;
@property(nonatomic) struct _LVUserDataInfo *lv_userData; // @synthesize lv_userData=_lv_userData;
@property(nonatomic) __weak LuaViewCore *lv_luaviewCore; // @synthesize lv_luaviewCore=_lv_luaviewCore;
- (void).cxx_destruct;
- (id)lv_nativeObject;
- (void)connectionDidFinishLoading;
- (void)connectionDidReceiveResponse:(id)arg1;
- (void)connectionDidReceiveData:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2;
- (_Bool)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2;
- (void)requesetEndToDo;
- (id)init:(struct lua_State *)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

