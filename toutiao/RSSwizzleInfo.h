//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface RSSwizzleInfo : NSObject
{
    SEL _selector;
    CDUnknownBlockType _impProviderBlock;
}

@property(copy, nonatomic) CDUnknownBlockType impProviderBlock; // @synthesize impProviderBlock=_impProviderBlock;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
- (void).cxx_destruct;
- (CDUnknownFunctionPointerType)getOriginalImplementation;

@end

