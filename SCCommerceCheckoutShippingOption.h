//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCCommerceCurrency;

@interface SCCommerceCheckoutShippingOption : NSObject <NSCopying>
{
    NSString *_identifier;
    SCCommerceCurrency *_price;
    NSString *_title;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)initWithIdentifier:(id)arg1 price:(id)arg2 title:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCCommerceCurrency *price; // @synthesize price=_price;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;

@end

