//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface SCSpectaclesAEADPacketEncryptor : NSObject
{
    void *_ctxt;
    NSData *_aEncryptionKey;
    NSData *_aTxNonce;
    NSData *_aRxNonce;
}

- (void).cxx_destruct;
- (void)_attemptSetupEncryptor;
@property(retain, nonatomic) NSData *aEncryptionKey; // @synthesize aEncryptionKey=_aEncryptionKey;
@property(retain, nonatomic) NSData *aRxNonce; // @synthesize aRxNonce=_aRxNonce;
@property(retain, nonatomic) NSData *aTxNonce; // @synthesize aTxNonce=_aTxNonce;
- (_Bool)connectionReady;
@property(nonatomic) void *ctxt; // @synthesize ctxt=_ctxt;
- (void)dealloc;
- (id)decryptMessage:(id)arg1;
- (id)encryptMessage:(id)arg1;
- (_Bool)setEncryptionKey:(id)arg1;
- (_Bool)setRxNonce:(id)arg1;
- (_Bool)setTxNonce:(id)arg1;

@end

