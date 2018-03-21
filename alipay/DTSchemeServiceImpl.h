//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "DTSchemeService-Protocol.h"

@class NSMutableArray, NSString, NSURL;

@interface DTSchemeServiceImpl : NSObject <DTSchemeService>
{
    NSMutableArray *_handlerClasses;
    NSMutableArray *_domainHandlerClasses;
    NSURL *_lastURL;
}

@property(retain, nonatomic) NSURL *lastURL; // @synthesize lastURL=_lastURL;
@property(retain, nonatomic) NSMutableArray *domainHandlerClasses; // @synthesize domainHandlerClasses=_domainHandlerClasses;
@property(retain, nonatomic) NSMutableArray *handlerClasses; // @synthesize handlerClasses=_handlerClasses;
- (void).cxx_destruct;
- (_Bool)handleDomainURL:(id)arg1 userInfo:(id)arg2;
- (void)handleDomainStartupNotification:(id)arg1;
- (void)unregisterDomainHandlerClass:(Class)arg1;
- (_Bool)registerDomainHandlerClass:(Class)arg1 atIndex:(long long)arg2;
- (_Bool)registerDomainHandlerClass:(Class)arg1;
- (_Bool)setSchemeValue:(id)arg1 forKey:(id)arg2;
- (id)getSchemeValueForKey:(id)arg1;
- (_Bool)isApplicationSchemeWithURL:(id)arg1;
- (long long)indexOfClass:(Class)arg1;
- (void)unregisterHandlerClass:(Class)arg1;
- (_Bool)registerHandlerClass:(Class)arg1 atIndex:(long long)arg2;
- (_Bool)registerHandlerClass:(Class)arg1;
- (_Bool)canHandleURL:(id)arg1;
- (_Bool)handleURL:(id)arg1 userInfo:(id)arg2;
- (void)start;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

