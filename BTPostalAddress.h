//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface BTPostalAddress : NSObject <NSCopying>
{
    NSString *_recipientName;
    NSString *_streetAddress;
    NSString *_extendedAddress;
    NSString *_locality;
    NSString *_countryCodeAlpha2;
    NSString *_postalCode;
    NSString *_region;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *countryCodeAlpha2; // @synthesize countryCodeAlpha2=_countryCodeAlpha2;
- (id)debugDescription;
@property(copy, nonatomic) NSString *extendedAddress; // @synthesize extendedAddress=_extendedAddress;
@property(copy, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(copy, nonatomic) NSString *recipientName; // @synthesize recipientName=_recipientName;
@property(copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(copy, nonatomic) NSString *streetAddress; // @synthesize streetAddress=_streetAddress;

@end

