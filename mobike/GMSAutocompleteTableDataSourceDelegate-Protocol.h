//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GMSAutocompletePrediction, GMSAutocompleteTableDataSource, GMSPlace, NSError;

@protocol GMSAutocompleteTableDataSourceDelegate <NSObject>
- (void)tableDataSource:(GMSAutocompleteTableDataSource *)arg1 didFailAutocompleteWithError:(NSError *)arg2;
- (void)tableDataSource:(GMSAutocompleteTableDataSource *)arg1 didAutocompleteWithPlace:(GMSPlace *)arg2;

@optional
- (void)didRequestAutocompletePredictionsForTableDataSource:(GMSAutocompleteTableDataSource *)arg1;
- (void)didUpdateAutocompletePredictionsForTableDataSource:(GMSAutocompleteTableDataSource *)arg1;
- (_Bool)tableDataSource:(GMSAutocompleteTableDataSource *)arg1 didSelectPrediction:(GMSAutocompletePrediction *)arg2;
@end

