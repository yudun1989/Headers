//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol DRTemplateProtocol;

@interface DRTemplate : NSObject
{
    id <DRTemplateProtocol> _configInstance;
}

+ (id)sharedInstance;
@property(retain, nonatomic) id <DRTemplateProtocol> configInstance; // @synthesize configInstance=_configInstance;
- (void).cxx_destruct;
- (void)registerTemplateInstance:(id)arg1;
- (id)templatePathWithTemplateURL:(id)arg1 fileName:(id)arg2;
- (id)templatePathWithTemplateName:(id)arg1;

@end

