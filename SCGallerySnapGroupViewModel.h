//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IGListDiffable-Protocol.h"
#import "SCGallerySnapGroupViewModel-Protocol.h"

@class NSArray, NSString;

@interface SCGallerySnapGroupViewModel : NSObject <IGListDiffable, SCGallerySnapGroupViewModel>
{
    NSString *_dateRange;
    NSString *_locationName;
    NSArray *_cellViewModels;
}

+ (unsigned long long *)fasterCodingKeys;
+ (unsigned long long)fasterCodingVersion;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *cellViewModels; // @synthesize cellViewModels=_cellViewModels;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *dateRange; // @synthesize dateRange=_dateRange;
- (void)decodeWithFasterDecoder:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)diffIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithFasterCoder:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDateRange:(id)arg1 locationName:(id)arg2 cellViewModels:(id)arg3;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToDiffableObject:(id)arg1;
@property(readonly, copy, nonatomic) NSString *locationName; // @synthesize locationName=_locationName;
- (_Bool)preferFasterCoding;
- (void)setObject:(id)arg1 forUInt64Key:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

