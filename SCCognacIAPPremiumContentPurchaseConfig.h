//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCCognacIAPPremiumContentPurchaseConfig : NSObject <NSCopying>
{
    NSString *_appId;
    NSString *_premiumContentId;
    NSString *_productId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithAppId:(id)arg1 premiumContentId:(id)arg2 productId:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *premiumContentId; // @synthesize premiumContentId=_premiumContentId;
@property(readonly, copy, nonatomic) NSString *productId; // @synthesize productId=_productId;

@end
