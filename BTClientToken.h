//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class BTJSON, NSString, NSURL;

@interface BTClientToken : NSObject <NSCoding, NSCopying>
{
    BTJSON *_json;
    NSString *_authorizationFingerprint;
    NSURL *_configURL;
    NSString *_originalValue;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *authorizationFingerprint; // @synthesize authorizationFingerprint=_authorizationFingerprint;
@property(retain, nonatomic) NSURL *configURL; // @synthesize configURL=_configURL;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)decodeClientToken:(id)arg1 error:(id *)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithClientToken:(id)arg1 error:(id *)arg2;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(retain, nonatomic) BTJSON *json; // @synthesize json=_json;
@property(copy, nonatomic) NSString *originalValue; // @synthesize originalValue=_originalValue;
- (id)parseJSONString:(id)arg1 error:(id *)arg2;
- (_Bool)validateClientToken:(id *)arg1;

@end

