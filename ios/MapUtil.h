//
//  Copyright © 2020 Emarsys. All rights reserved.
//

#import "Emarsys.h"
#import "EMSCartItem.h"

#import "EMSLogic.h"
#import "EMSRecommendationFilter.h"
#import "EMSProduct.h"

@interface MapUtil : NSObject
+ (NSMutableDictionary *)convertProductToMap:(EMSProduct *)product;
+ (EMSProduct *)mapToProduct:(NSDictionary *)object;
+ (NSArray<EMSRecommendationFilter *> *)mapToRecommendationFilter:(NSDictionary *)map;
+ (NSMutableDictionary *)convertMessageToMap:(EMSMessage *)message;
@end
