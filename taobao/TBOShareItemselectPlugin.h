//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MCShareItemSelectPlugin.h"

@interface TBOShareItemselectPlugin : MCShareItemSelectPlugin
{
    CDUnknownBlockType _selectItemListCallback;
    long long _maxNum;
}

@property(nonatomic) long long maxNum; // @synthesize maxNum=_maxNum;
@property(copy, nonatomic) CDUnknownBlockType selectItemListCallback; // @synthesize selectItemListCallback=_selectItemListCallback;
- (void).cxx_destruct;
- (void)shareItemSelectComponent:(id)arg1 commitShareItems:(id)arg2;
- (void)processPage:(id)arg1;

@end

