//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, NSValue, SCSearchQuery, SCSectionKitHeaderModel;

@interface SCSearchSimpleSnapCarouselSectionConfiguration : NSObject <NSCopying>
{
    SCSearchQuery *_query;
    SCSectionKitHeaderModel *_sectionHeaderModel;
    NSString *_sectionType;
    NSArray *_stories;
    long long _cellStyle;
    long long _contentMode;
    unsigned long long _numberOfRows;
    double _minimumInteritemSpacing;
    NSValue *_sectionInsets;
    NSString *_resultSectionIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(readonly, nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithQuery:(id)arg1 sectionHeaderModel:(id)arg2 sectionType:(id)arg3 stories:(id)arg4 cellStyle:(long long)arg5 contentMode:(long long)arg6 numberOfRows:(unsigned long long)arg7 minimumInteritemSpacing:(double)arg8 sectionInsets:(id)arg9 resultSectionIdentifier:(id)arg10;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) double minimumInteritemSpacing; // @synthesize minimumInteritemSpacing=_minimumInteritemSpacing;
@property(readonly, nonatomic) unsigned long long numberOfRows; // @synthesize numberOfRows=_numberOfRows;
@property(readonly, copy, nonatomic) SCSearchQuery *query; // @synthesize query=_query;
@property(readonly, copy, nonatomic) NSString *resultSectionIdentifier; // @synthesize resultSectionIdentifier=_resultSectionIdentifier;
@property(readonly, copy, nonatomic) SCSectionKitHeaderModel *sectionHeaderModel; // @synthesize sectionHeaderModel=_sectionHeaderModel;
@property(readonly, copy, nonatomic) NSValue *sectionInsets; // @synthesize sectionInsets=_sectionInsets;
@property(readonly, copy, nonatomic) NSString *sectionType; // @synthesize sectionType=_sectionType;
@property(readonly, copy, nonatomic) NSArray *stories; // @synthesize stories=_stories;

@end

