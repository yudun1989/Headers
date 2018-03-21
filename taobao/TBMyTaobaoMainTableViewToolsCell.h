//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSString, TBMyTaobaoMyToolsItem, TBMyTaobaoToolsItem, TBMyTaobaoToolsView;

@interface TBMyTaobaoMainTableViewToolsCell : UITableViewCell
{
    TBMyTaobaoMyToolsItem *_toolsItem;
    TBMyTaobaoToolsView *_toolsView;
    long long _row;
    NSString *_titleName;
    NSArray *_cellData;
    TBMyTaobaoToolsItem *_superCell;
    unsigned long long _type;
}

+ (double)heightForType:(unsigned long long)arg1 numberOfRows:(long long)arg2 isMorePages:(_Bool)arg3;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) TBMyTaobaoToolsItem *superCell; // @synthesize superCell=_superCell;
@property(retain, nonatomic) NSArray *cellData; // @synthesize cellData=_cellData;
@property(retain, nonatomic) NSString *titleName; // @synthesize titleName=_titleName;
@property(nonatomic) long long row; // @synthesize row=_row;
@property(retain, nonatomic) TBMyTaobaoToolsView *toolsView; // @synthesize toolsView=_toolsView;
@property(retain, nonatomic) TBMyTaobaoMyToolsItem *toolsItem; // @synthesize toolsItem=_toolsItem;
- (void).cxx_destruct;
- (long long)pageItemNumber;
- (long long)pageNumber;
- (void)prepareForReuse;
- (void)processDataForSuperCellLogic;
- (void)setType:(unsigned long long)arg1 ToolsItem:(id)arg2;
- (void)setType:(unsigned long long)arg1 rowNumber:(long long)arg2 titleName:(id)arg3 cellData:(id)arg4 superCellData:(id)arg5;
- (void)setType:(unsigned long long)arg1 rowNumber:(long long)arg2 titleName:(id)arg3 cellData:(id)arg4;
- (void)setType:(unsigned long long)arg1 rowNumber:(long long)arg2 cellData:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

