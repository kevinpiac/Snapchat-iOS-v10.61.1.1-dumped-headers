//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCSearchUserProfileCellData : NSObject <NSCopying>
{
    _Bool _isExpanded;
    NSString *_fieldName;
    NSString *_fieldValue;
    NSArray *_details;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSArray *details; // @synthesize details=_details;
@property(readonly, copy, nonatomic) NSString *fieldName; // @synthesize fieldName=_fieldName;
@property(readonly, copy, nonatomic) NSString *fieldValue; // @synthesize fieldValue=_fieldValue;
- (unsigned long long)hash;
- (id)initWithFieldName:(id)arg1 fieldValue:(id)arg2 details:(id)arg3 isExpanded:(_Bool)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isExpanded; // @synthesize isExpanded=_isExpanded;

@end

