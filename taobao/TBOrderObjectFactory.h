//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary;

@interface TBOrderObjectFactory : NSObject
{
    NSDictionary *_basicComponentCreateRules;
    NSDictionary *_bizComponentCreateRules;
    NSDictionary *_modelCreateRules;
    NSDictionary *_basicTemplateComponentCreateRules;
}

+ (id)createBasicTemplateComponentWithData:(id)arg1 templateTag:(id)arg2;
+ (id)creatModelWithCellType:(id)arg1 cellData:(id)arg2;
+ (id)creatComponentWithDict:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSDictionary *basicTemplateComponentCreateRules; // @synthesize basicTemplateComponentCreateRules=_basicTemplateComponentCreateRules;
@property(retain, nonatomic) NSDictionary *modelCreateRules; // @synthesize modelCreateRules=_modelCreateRules;
@property(retain, nonatomic) NSDictionary *bizComponentCreateRules; // @synthesize bizComponentCreateRules=_bizComponentCreateRules;
@property(retain, nonatomic) NSDictionary *basicComponentCreateRules; // @synthesize basicComponentCreateRules=_basicComponentCreateRules;
- (void).cxx_destruct;
- (id)createBasicTemplateComponentWithData:(id)arg1 templateTag:(id)arg2;
- (id)creatModelWithCellType:(id)arg1 cellData:(id)arg2;
- (id)creatComponentWithDict:(id)arg1;
- (void)initComponentCreateRules;
- (id)init;

@end

