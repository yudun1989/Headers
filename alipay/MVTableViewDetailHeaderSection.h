//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MVTableSection.h"

@class NSAttributedString;

@interface MVTableViewDetailHeaderSection : MVTableSection
{
    long long _workCount;
    NSAttributedString *_titleAttributeString;
    CDUnknownBlockType _didTapBlock;
}

@property(copy, nonatomic) CDUnknownBlockType didTapBlock; // @synthesize didTapBlock=_didTapBlock;
@property(copy, nonatomic) NSAttributedString *titleAttributeString; // @synthesize titleAttributeString=_titleAttributeString;
@property(nonatomic) long long workCount; // @synthesize workCount=_workCount;
- (void).cxx_destruct;
- (id)viewForHeaderInTableView:(id)arg1 section:(long long)arg2;
- (double)heightForHeaderInTableView:(id)arg1 inSection:(long long)arg2;
- (double)heightForFooterInTableView:(id)arg1 inSection:(long long)arg2;
- (id)reuseIdentifier;

@end

