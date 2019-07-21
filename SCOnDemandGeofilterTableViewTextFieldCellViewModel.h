//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCOnDemandGeofilterTableViewTextFieldCellViewModel-Protocol.h"

@class NSString, UIColor;

@interface SCOnDemandGeofilterTableViewTextFieldCellViewModel : NSObject <SCOnDemandGeofilterTableViewTextFieldCellViewModel>
{
    NSString *_cellNameText;
    NSString *_detailText;
    NSString *_textFieldText;
    UIColor *_cellNameTextColor;
    UIColor *_detailTextColor;
    UIColor *_textFieldTextColor;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *cellNameText; // @synthesize cellNameText=_cellNameText;
@property(readonly, copy, nonatomic) UIColor *cellNameTextColor; // @synthesize cellNameTextColor=_cellNameTextColor;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *detailText; // @synthesize detailText=_detailText;
@property(readonly, copy, nonatomic) UIColor *detailTextColor; // @synthesize detailTextColor=_detailTextColor;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCellNameText:(id)arg1 detailText:(id)arg2 textFieldText:(id)arg3 cellNameTextColor:(id)arg4 detailTextColor:(id)arg5 textFieldTextColor:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;
@property(readonly, copy, nonatomic) NSString *textFieldText; // @synthesize textFieldText=_textFieldText;
@property(readonly, copy, nonatomic) UIColor *textFieldTextColor; // @synthesize textFieldTextColor=_textFieldTextColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

