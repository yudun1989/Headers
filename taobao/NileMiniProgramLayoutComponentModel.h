//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NileBaseLayoutComponentModel.h"

#import "NileMiniProgramLayoutComponentModelProtocol-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol NileStatsModelProtocol;

@interface NileMiniProgramLayoutComponentModel : NileBaseLayoutComponentModel <NileMiniProgramLayoutComponentModelProtocol>
{
    NSDictionary *_originData;
}

@property(copy, nonatomic) NSDictionary *originData; // @synthesize originData=_originData;
- (void).cxx_destruct;
- (_Bool)isValid;
- (id)exposeName:(id)arg1;
- (id)controlName:(id)arg1;
- (id)spmC:(id)arg1;
- (void)configWithData:(id)arg1;

// Remaining properties
@property(nonatomic) long long childIndex;
@property(retain, nonatomic) NSArray *childrenModel;
@property(copy, nonatomic) NSString *componentDataId;
@property(copy, nonatomic) NSString *componentId;
@property(copy, nonatomic) CDUnknownBlockType createComponentBlock;
@property(copy, nonatomic) CDUnknownBlockType createComponentModelBlock;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) NSDictionary *pageContextParam;
@property(retain, nonatomic) NSString *pageName;
@property(retain, nonatomic) NSString *spmA;
@property(retain, nonatomic) NSString *spmB;
@property(retain, nonatomic) id <NileStatsModelProtocol> statsModel;
@property(readonly) Class superclass;

@end

