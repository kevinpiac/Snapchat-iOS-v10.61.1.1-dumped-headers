//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface BTCard : NSObject
{
    _Bool _shouldValidate;
    NSString *_number;
    NSString *_expirationMonth;
    NSString *_expirationYear;
    NSString *_cvv;
    NSString *_postalCode;
    NSString *_cardholderName;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_company;
    NSString *_streetAddress;
    NSString *_extendedAddress;
    NSString *_locality;
    NSString *_region;
    NSString *_countryName;
    NSString *_countryCodeAlpha2;
    NSString *_countryCodeAlpha3;
    NSString *_countryCodeNumeric;
    NSMutableDictionary *_mutableParameters;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *cardholderName; // @synthesize cardholderName=_cardholderName;
@property(copy, nonatomic) NSString *company; // @synthesize company=_company;
@property(copy, nonatomic) NSString *countryCodeAlpha2; // @synthesize countryCodeAlpha2=_countryCodeAlpha2;
@property(copy, nonatomic) NSString *countryCodeAlpha3; // @synthesize countryCodeAlpha3=_countryCodeAlpha3;
@property(copy, nonatomic) NSString *countryCodeNumeric; // @synthesize countryCodeNumeric=_countryCodeNumeric;
@property(copy, nonatomic) NSString *countryName; // @synthesize countryName=_countryName;
@property(copy, nonatomic) NSString *cvv; // @synthesize cvv=_cvv;
@property(copy, nonatomic) NSString *expirationMonth; // @synthesize expirationMonth=_expirationMonth;
@property(copy, nonatomic) NSString *expirationYear; // @synthesize expirationYear=_expirationYear;
@property(copy, nonatomic) NSString *extendedAddress; // @synthesize extendedAddress=_extendedAddress;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
- (id)init;
- (id)initWithNumber:(id)arg1 expirationMonth:(id)arg2 expirationYear:(id)arg3 cvv:(id)arg4;
- (id)initWithParameters:(id)arg1;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *locality; // @synthesize locality=_locality;
@property(retain, nonatomic) NSMutableDictionary *mutableParameters; // @synthesize mutableParameters=_mutableParameters;
@property(copy, nonatomic) NSString *number; // @synthesize number=_number;
- (id)parameters;
@property(copy, nonatomic) NSString *postalCode; // @synthesize postalCode=_postalCode;
@property(copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(nonatomic) _Bool shouldValidate; // @synthesize shouldValidate=_shouldValidate;
@property(copy, nonatomic) NSString *streetAddress; // @synthesize streetAddress=_streetAddress;

@end

