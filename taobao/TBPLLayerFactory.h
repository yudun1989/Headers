//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@interface TBPLLayerFactory : NSObject
{
    NSMutableDictionary *_typeToLayerClassMutDict;
    NSString *_defaultType;
    Class _defaultLayerClass;
}

+ (id)sharedInstance;
@property(nonatomic) Class defaultLayerClass; // @synthesize defaultLayerClass=_defaultLayerClass;
@property(copy, nonatomic) NSString *defaultType; // @synthesize defaultType=_defaultType;
@property(retain, nonatomic) NSMutableDictionary *typeToLayerClassMutDict; // @synthesize typeToLayerClassMutDict=_typeToLayerClassMutDict;
- (void).cxx_destruct;
- (id)createLayerWithFrame:(struct CGRect)arg1 type:(id)arg2 popRequest:(id)arg3 attachVC:(id)arg4;
- (id)createLayerWithFrame:(struct CGRect)arg1 type:(id)arg2 config:(id)arg3 targetUrl:(id)arg4;
- (void)registeType:(id)arg1 withLayerClass:(Class)arg2 isDefaultType:(_Bool)arg3;

@end
