//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCAccessibleScope-Protocol.h"

@interface SCAvailableScope : NSObject <SCAccessibleScope>
{
    struct map<__weak Class, __weak id, std::__1::less<__weak Class>, std::__1::allocator<std::__1::pair<const __weak Class, __weak id>>> _scopes;
    struct map<__weak Class, std::__1::set<SCScopedAccess *__weak, std::__1::less<SCScopedAccess *__weak>, std::__1::allocator<SCScopedAccess *__weak>>, std::__1::less<__weak Class>, std::__1::allocator<std::__1::pair<const __weak Class, std::__1::set<SCScopedAccess *__weak, std::__1::less<SCScopedAccess *__weak>, std::__1::allocator<SCScopedAccess *__weak>>>>> _accessors;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)access:(Class)arg1;
- (id)access:(Class)arg1 andGet:(CDUnknownBlockType)arg2;
- (void)add:(id)arg1;
- (id)debugRepresentation;
- (void)remove:(id)arg1;
- (id)scopeInstance:(Class)arg1;

@end

