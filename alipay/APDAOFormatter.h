//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "APDAOEvaluatorDelegate-Protocol.h"
#import "APDAOTextSpeedyDelegate-Protocol.h"

@class APDAOConfig, APDAOMethod, NSDictionary, NSError, NSMutableArray, NSString;
@protocol APDAOProtocol;

@interface APDAOFormatter : NSObject <APDAOEvaluatorDelegate, APDAOTextSpeedyDelegate>
{
    Class _cachedClass;
    NSString *_cachedClassName;
    unsigned long long _resumableCacheSize;
    _Bool _tryFailed;
    APDAOConfig *_config;
    APDAOMethod *_method;
    NSString *_tableName;
    NSDictionary *_arguments;
    NSError *_error;
    NSMutableArray *_sqls;
    NSMutableArray *_bindList;
    _Bool *_resumable;
    id <APDAOProtocol> _delegate;
}

@property(nonatomic) __weak id <APDAOProtocol> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool *resumable; // @synthesize resumable=_resumable;
@property(retain, nonatomic) NSMutableArray *bindList; // @synthesize bindList=_bindList;
@property(retain, nonatomic) NSMutableArray *sqls; // @synthesize sqls=_sqls;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(nonatomic) _Bool tryFailed; // @synthesize tryFailed=_tryFailed;
@property(retain, nonatomic) NSDictionary *arguments; // @synthesize arguments=_arguments;
@property(retain, nonatomic) NSString *tableName; // @synthesize tableName=_tableName;
@property(retain, nonatomic) APDAOMethod *method; // @synthesize method=_method;
@property(retain, nonatomic) APDAOConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)getPropertiesOfArgument:(id)arg1 forList:(id)arg2 saveToList:(id)arg3;
- (id)findObjectWithKeyPathSegments:(id)arg1 forBinding:(_Bool)arg2;
- (id)findObjectWithName:(id)arg1;
- (_Bool)evaluateBooleanWithCondition:(id)arg1 evaluateResult:(_Bool *)arg2;
- (_Bool)formatText:(id)arg1 buffer:(id)arg2 speedyList:(id)arg3 bindList:(id)arg4 temporaryArguments:(id)arg5;
- (id)findObjectWithName:(id)arg1 temporaryArguments:(id)arg2 forBinding:(_Bool)arg3;
- (id)getPropertyWithName:(id)arg1 ofObject:(id)arg2 forBinding:(_Bool)arg3;
- (id)getCryptedValueForProperty:(id)arg1 className:(id)arg2 value:(id)arg3;
- (id)getArgumentWithName:(id)arg1 temporaryArguments:(id)arg2;
- (_Bool)formatElement:(id)arg1 buffer:(id)arg2 bindList:(id)arg3 flag:(_Bool *)arg4 quit:(_Bool *)arg5;
- (void)reset;
- (void)execute;
- (void)makeErrorWithReason:(id)arg1;
- (void)dealloc;
- (id)initWithMethod:(id)arg1 tableName:(id)arg2 arguments:(id)arg3 config:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

