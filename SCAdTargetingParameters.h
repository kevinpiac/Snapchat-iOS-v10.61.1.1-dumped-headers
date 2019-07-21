//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCAdTargetingParameters : NSObject <NSCopying>
{
    _Bool _isUnskippableAdSlot;
    NSString *_inventoryType;
    NSString *_inventoryId;
    long long _adPosition;
    NSString *_debugAdId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long adPosition; // @synthesize adPosition=_adPosition;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSString *debugAdId; // @synthesize debugAdId=_debugAdId;
- (unsigned long long)hash;
- (id)initWithInventoryType:(id)arg1 inventoryId:(id)arg2 adPosition:(long long)arg3 isUnskippableAdSlot:(_Bool)arg4 debugAdId:(id)arg5;
@property(readonly, copy, nonatomic) NSString *inventoryId; // @synthesize inventoryId=_inventoryId;
@property(readonly, copy, nonatomic) NSString *inventoryType; // @synthesize inventoryType=_inventoryType;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isUnskippableAdSlot; // @synthesize isUnskippableAdSlot=_isUnskippableAdSlot;

@end

