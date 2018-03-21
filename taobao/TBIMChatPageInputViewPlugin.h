//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "MCPluginBaseProtocol-Protocol.h"

@class NSDictionary, NSString;

@interface TBIMChatPageInputViewPlugin : NSObject <MCPluginBaseProtocol>
{
    NSString *_inputText;
}

@property(retain, nonatomic) NSString *inputText; // @synthesize inputText=_inputText;
- (void).cxx_destruct;
- (void)processPage:(id)arg1;
- (id)getKey;
- (id)getPageName;
- (id)initWithInputText:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) NSDictionary *userInfo;

@end

