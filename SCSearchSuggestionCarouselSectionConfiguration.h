//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCSearchQuery, SCSectionKitHeaderModel;

@interface SCSearchSuggestionCarouselSectionConfiguration : NSObject <NSCopying>
{
    SCSectionKitHeaderModel *_sectionHeaderModel;
    NSString *_sectionType;
    SCSearchQuery *_query;
    NSArray *_suggestions;
    long long _cellStyle;
    unsigned long long _numberOfRows;
    long long _sectionContentMode;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithSectionHeaderModel:(id)arg1 sectionType:(id)arg2 query:(id)arg3 suggestions:(id)arg4 cellStyle:(long long)arg5 numberOfRows:(unsigned long long)arg6 sectionContentMode:(long long)arg7;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(readonly, copy, nonatomic) SCSearchQuery *query; // @synthesize query=_query;
@property(readonly, nonatomic) long long sectionContentMode; // @synthesize sectionContentMode=_sectionContentMode;
@property(readonly, copy, nonatomic) SCSectionKitHeaderModel *sectionHeaderModel; // @synthesize sectionHeaderModel=_sectionHeaderModel;
@property(readonly, copy, nonatomic) NSString *sectionType; // @synthesize sectionType=_sectionType;
@property(readonly, copy, nonatomic) NSArray *suggestions; // @synthesize suggestions=_suggestions;

@end

