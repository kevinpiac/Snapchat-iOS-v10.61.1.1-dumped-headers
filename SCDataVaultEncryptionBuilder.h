//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLLocation, NSData;

@interface SCDataVaultEncryptionBuilder : NSObject
{
    CLLocation *_location;
    NSData *_key;
    NSData *_iV;
    _Bool _isEncrypted;
}

+ (id)withDataVaultEncryption:(id)arg1;
- (void).cxx_destruct;
- (id)build;
- (id)setIV:(id)arg1;
- (id)setIsEncrypted:(_Bool)arg1;
- (id)setKey:(id)arg1;
- (id)setLocation:(id)arg1;

@end

