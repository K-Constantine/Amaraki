// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from simi.djinni

#import <Foundation/Foundation.h>
@class OAKLIBProduct;
@protocol OAKLIBSimpleCursor;


@interface OAKLIBProduct : NSObject

- (nonnull NSString *)getId;

- (nonnull NSString *)getName;

- (nonnull NSString *)getPrice;

- (BOOL)isInStock;

- (nonnull NSString *)getImageUrl;

+ (nullable OAKLIBProduct *)getInstance:(nullable id<OAKLIBSimpleCursor>)cursor;

@end
