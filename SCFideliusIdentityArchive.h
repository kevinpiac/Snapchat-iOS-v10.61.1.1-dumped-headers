//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SCFideliusIdentityArchive : NSObject
{
}

+ (id)_loadIdentityFromArchive;
+ (id)_loadIdentityFromKeyChain;
+ (_Bool)_saveToArchive:(id)arg1;
+ (_Bool)_saveToKeychain:(id)arg1;
+ (void)clear;
+ (id)fideliusIdentityPath;
+ (id)loadIdentity;
+ (_Bool)save:(id)arg1;

@end
